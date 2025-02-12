public class FruitBat extends Mammal{
    public FruitBat(String name, int age) {
        super(name, age);
    }
    public String toString()
    {
        return getName()+ " is a FruitBat, aged " + getAge() ;
    }
}
