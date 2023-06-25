package patterns.Creational.FactoryMethod.Buttons;

/**
 * HtmlButton
 */
public class HtmlButton implements Button {
    @Override
    public void render()
    {
        System.out.println("[Html] Rendering");
    }

    @Override
    public void onClick()
    {
        System.out.println("[Html] Clicked");
    }
}
