public class Empresa {

   public static void main(String args[]) {
        String parametro1 = args[0];
        if (parametro1.equals("-p")) {
           System.out.println("Mostrando archivos");
        } else {
           System.out.println("Mostrando directorios y archivos");

        }
   
   }
   

}