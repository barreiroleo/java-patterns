package patterns.Creational.FactoryMethod.Factory;

import patterns.Creational.FactoryMethod.Buttons.Button;
import patterns.Creational.FactoryMethod.Buttons.HtmlButton;

/**
 * HtmlDialog
 */
public class HtmlDialog extends Dialog {
    @Override
    public Button createButton()
    {
        return new HtmlButton();
    }
}
