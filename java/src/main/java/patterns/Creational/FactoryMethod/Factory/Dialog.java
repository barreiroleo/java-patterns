package patterns.Creational.FactoryMethod.Factory;

import patterns.Creational.FactoryMethod.Buttons.Button;

/**
 * Dialog
 */
abstract public class Dialog {
    public void renderWindow()
    {
        Button button = createButton();
        button.render();
    }

    abstract public Button createButton();
}
