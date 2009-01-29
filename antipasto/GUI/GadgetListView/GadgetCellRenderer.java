package antipasto.GUI.GadgetListView;


import javax.swing.*;

import antipasto.Interfaces.IModule;

import java.awt.*;

public class GadgetCellRenderer extends DefaultListCellRenderer {
    public Component getListCellRendererComponent(JList list,
                                                    Object value,
                                                    int index,
                                                    boolean isSelected,
                                                    boolean hasFocus) {
        JLabel label =
          (JLabel)super.getListCellRendererComponent(list,
                                                     value,
                                                     index,
                                                     isSelected,
                                                     hasFocus);
        if (value instanceof IModule) {
            IModule gadget = (IModule)value;
            ImageIcon icon = new ImageIcon(gadget.getImage());
            label.setIcon(icon);
            label.setText(gadget.getName());
        } else {
          // Clear old icon; needed in 1st release of JDK 1.2
          label.setIcon(null);
        }
        return(label);
      }

}