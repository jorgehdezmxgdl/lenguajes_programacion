package mx.gdl.unedl.empresa.util;

import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import javax.print.attribute.standard.DateTimeAtCompleted;
import mx.gdl.unedl.empresa.ui.VentanaEmpresa;

/**
 *
 * @author jorgefausto
 */
public class Tiempo extends Thread{
    
    private VentanaEmpresa editor;
    
    public Tiempo(VentanaEmpresa editor) {
        this.editor = editor;
    }
    
    @Override
    public void run() {
        while (true) {
            try {
                LocalTime tiempo = LocalTime.now();
                DateTimeFormatter df =
                    DateTimeFormatter.ofPattern("HH:mm:ss");
                df.format(tiempo);
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.getLogger(Tiempo.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
            }
        }
    }
}
