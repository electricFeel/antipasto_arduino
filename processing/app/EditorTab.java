package processing.app;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.FontMetrics;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.font.FontRenderContext;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RoundRectangle2D;
import java.io.File;

import javax.swing.JComponent;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;

public class EditorTab extends JComponent implements DocumentListener, MouseListener{
	RoundRectangle2D roundRect;
	Rectangle2D rect;
	
	boolean isUpdated = false;
	
	Color color;
	String txt;
	
	Font font;
	
	Editor editor;
	
	Object obj;
	
	int updates = 0;
	
	public EditorTab(Color color, String title, Object valueHolder, Editor editor){
		//We need to create a rounded
		this.txt = title;
		this.color = color;
		this.editor = editor;
		
		String family = "Lucida Sans Typewriter";
        int style = Font.PLAIN;
        int size = 18;
		
		this.font = new Font(family, style, size);
		
		this.setVisible(true);
		
		obj = valueHolder;
		if(obj instanceof SketchCode){
			//SketchCode instance
			SketchCode skc = (SketchCode)obj;
			skc.document.addDocumentListener(this);
		}else if(obj instanceof File[]){
			//List of files isntance
		}
		
		this.addMouseListener(this);
	}
	
	 public void paint(Graphics g) {
	        Graphics2D graphics2 = (Graphics2D) g;
	        FontRenderContext renderContext = graphics2.getFontRenderContext();
			FontMetrics metrics = g.getFontMetrics(font);
			
			String printTxt = this.txt;
			
			if(isUpdated){
				printTxt = printTxt + "*";
			}
			
			double textWidth = (metrics.getStringBounds(txt, g).getWidth() / 2) * 1.2;
			roundRect = new RoundRectangle2D.Double(0, 0, textWidth, 25 , 10, 10);
			rect = new Rectangle2D.Double(0,10,textWidth, 15);
			
			graphics2.drawString(printTxt, 5, 0 + metrics.getAscent());
			graphics2.setColor(this.color);
			graphics2.fill(roundRect);
			graphics2.fill(rect);
	        graphics2.draw(roundRect);
	        graphics2.draw(rect);
	        graphics2.setColor(Color.black);
	        graphics2.drawString(printTxt, 5, 0 + metrics.getAscent());
			this.setPreferredSize(new Dimension((int) textWidth, 25));
	    }

	public void changedUpdate(DocumentEvent arg0) {
		this.isUpdated = true;
		System.out.println("Changed Update");
		this.repaint();
	}
	public void insertUpdate(DocumentEvent arg0) {
		this.isUpdated = true;
		updates++;
		this.repaint();
	}

	public void removeUpdate(DocumentEvent arg0) {
		this.isUpdated = true;
		updates--;
		if(updates == 0){
			isUpdated = false;
		}
		this.repaint();
	}

	public void mouseClicked(MouseEvent arg0) {
		// TODO Auto-generated method stub
		
	}

	public void mouseEntered(MouseEvent arg0) {
		// TODO Auto-generated method stub
		
	}

	public void mouseExited(MouseEvent arg0) {
		// TODO Auto-generated method stub
		
	}

	public void mousePressed(MouseEvent arg0) {
		if(this.obj instanceof SketchCode){
			//we load the sketch code and make the editor window visible
			editor.setCode((SketchCode)obj);
		}else if(this.obj instanceof File[]){
			//we load the File[] and make the list view window visible
			editor.setImageListVisable();
		}
	}

	public void mouseReleased(MouseEvent arg0) {
		// TODO Auto-generated method stub
		
	}
}
