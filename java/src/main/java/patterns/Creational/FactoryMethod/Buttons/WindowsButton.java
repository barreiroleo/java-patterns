package patterns.Creational.FactoryMethod.Buttons;

/**
 * HtmlButton
 */
public class WindowsButton implements Button {
    @Override
    public void render()
    {
        System.out.println("[Windows] Rendering");
    }

    @Override
    public void onClick()
    {
        System.out.println("[Windows] Clicked");
    }
}
