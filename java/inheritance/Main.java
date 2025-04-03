public class Main {
    public static void main(String[] args) {
        Car car=new Car();
        car.setBrand("ferrari");
        car.setSeet(4);
        car.setSpeed(100);
        System.out.println(car.getBrand());
        System.out.println(car.getSeet());
        System.out.println(car.getSpeed());

        Car car2=new Car(2,200,"audi");
        System.out.println(car2.getBrand());
        System.out.println(car2.getSeet());
        System.out.println(car2.getSpeed());
        car2.display();
        Vehicle vehicle=new Vehicle();
        vehicle.display();
    }
    
}
