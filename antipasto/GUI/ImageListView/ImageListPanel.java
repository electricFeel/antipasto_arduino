package antipasto.GUI.ImageListView;

import java.awt.BorderLayout;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

import antipasto.GUI.GadgetListView.GadgetPanel;
import antipasto.GUI.GadgetListView.GadgetPanelEvents.ActiveGadgetObject;
import antipasto.GUI.GadgetListView.GadgetPanelEvents.IActiveGadgetChangedEventListener;
import antipasto.Interfaces.IModule;

import processing.app.Serial;
import processing.app.SerialException;
import processing.app.TouchShieldImageTransfer;


public class ImageListPanel extends JPanel implements IActiveGadgetChangedEventListener {
	private ImageListView list;
	private TouchShieldImageTransfer imageTransfer;
	private JButton transferButton;
	private GadgetPanel gadgetPanel;
	public ImageListPanel(GadgetPanel panel, TouchShieldImageTransfer imageTransfer){
		this.imageTransfer = imageTransfer;
		this.setVisible(true);
	}
	
	public void setGadgetPanel(GadgetPanel panel){
		if(panel != null){
			this.gadgetPanel = panel;
			list = new ImageListView(panel);
			this.setLayout(new BorderLayout());
			this.add(list, BorderLayout.CENTER);
			this.createTransferButton();
			this.add(transferButton, BorderLayout.SOUTH);
			panel.addActiveGadgetChangedEventListener(this);
			list.setVisible(true);
			System.out.println("Done loading");
			this.transferButton.setVisible(true);
			this.setVisible(true);
		}else{
			System.out.println("panel is null");
		}
	}
	
	private void createTransferButton(){
		this.transferButton = new JButton("Transfer");
		this.transferButton.addMouseListener(new MouseListener(){

			public void mouseClicked(MouseEvent arg0) {
				transfer();
			}

			public void mouseEntered(MouseEvent arg0) {
				// TODO Auto-generated method stub
				
			}

			public void mouseExited(MouseEvent arg0) {
				// TODO Auto-generated method stub
				
			}

			public void mousePressed(MouseEvent arg0) {
				// TODO Auto-generated method stub
				
			}

			public void mouseReleased(MouseEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
		});
		this.transferButton.setVisible(true);
	}
	
	private void transfer(){
		try {
			this.imageTransfer.setSerial(new Serial(true));
			this.imageTransfer.ModuleImageTransfer(gadgetPanel.getActiveModule());
		} catch (SerialException e) {
			e.printStackTrace();
		}
	}

	public void onActiveGadgetChanged(ActiveGadgetObject obj) {
	}
	
	}
