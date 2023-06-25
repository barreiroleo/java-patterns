package patterns.Creational.FactoryMethod;

import patterns.Creational.FactoryMethod.Factory.Dialog;
import patterns.Creational.FactoryMethod.Factory.HtmlDialog;
import patterns.Creational.FactoryMethod.Factory.WindowsDialog;

/**
 * Demo
 */
public class Demo {
    static private Dialog dialog;

    public static void main(String[] args)
    {
        configure();
        runBusinessLogic();
    }

    static public void configure()
    {
        if (System.getProperty("os.name").equals("Windows 10")) {
            dialog = new WindowsDialog();
        }
        else {
            dialog = new HtmlDialog();
        }
    }

    static public void runBusinessLogic()
    {
        dialog.renderWindow();
    }
}
