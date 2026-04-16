import data.base.Modelo;
import data.base.Laptop;
import data.base.Escritorio;


public class Empresa {

   public void leeArgumentos(String args[]) {
        String parametro1 = null;
        try {
          parametro1 = args[0];
        } catch (Exception ex) {
        }
        
        if (parametro1 != null && parametro1.equals("-p")) {
           System.out.println("Mostrando archivos");
        } else {
           System.out.println("Mostrando directorios y archivos");

        }
   }
   
   public static void main(String args[]) {
         Modelo modelo = new Modelo();
         System.out.println(modelo.toString());

	 Laptop dell = new Laptop();
         System.out.println(dell.toString());

         Escritorio e = new Escritorio();
         System.out.println(e.toString());        
   
   }
   

}