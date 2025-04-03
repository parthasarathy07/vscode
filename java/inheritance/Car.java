public class Car extends Vehicle{
    private int seet;

    public Car(int seet,int speed,String brand) {
        this.seet = seet;
        setBrand(brand);
        setSpeed(speed);
    }

    public Car() {
    }

    public int getSeet() {
        return this.seet;
    }

    public void setSeet(int seet) {
        this.seet = seet;
    }
    @Override
    public void display(){
        System.out.println("it is car");
    }
}
