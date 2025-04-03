class Vehicle{
    private int speed;
    private String brand;

    public Vehicle(int speed, String brand) {
        this.speed = speed;
        this.brand = brand;
    }
    Vehicle(){

    }
    public int getSpeed() {
        return this.speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    public String getBrand() {
        return this.brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }
    public void display(){
        System.out.println("it is vechicle");
    }
}