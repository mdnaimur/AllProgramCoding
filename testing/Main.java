class Animal {

    String animalName ;
    String animalColor ;

    public Animal(String animalName, String animalColor){

        this.animalName = animalName;
        this.animalColor = animalColor;
    }

    public void showName(){
        System.out.println("Animal Name is: "+this.animalName);
    }
    public void showColor(){
        System.out.println("Animal Color is: "+this.animalColor);
    }
}

class Cow extends Animal{

    private String work ;
    public Cow(String animalName, String animalColor) {
//        this.work = "No Work";//This is not valid
        super(animalName, animalColor);//super in constructor have to be on top
        this.work = "Gives Milk";//This is valid
    }

    @Override
    public void showColor() {
        System.out.println("Before showColor in child");
        super.showColor(); 
    }

    @Override
    public void showName() {
        super.showName(); 
        System.out.println("After showName in child");
    }
    public void showDescription(){
        this.showName();
        System.out.println("Animal Work is: "+this.work);
        this.showColor();
    }
}


public class Main {

    public static void main(String[] args) {

        Cow cow = new Cow("White Cow", "White");
        cow.showDescription();
    }
}
