package patterns.Creational.FactoryMethod.Factory;

import patterns.Creational.FactoryMethod.Buttons.Button;
import patterns.Creational.FactoryMethod.Buttons.WindowsButton;

/**
 * HtmlDialog
 */
public class WindowsDialog extends Dialog {
    @Override
    public Button createButton()
    {
        return new WindowsButton();
    }
}
