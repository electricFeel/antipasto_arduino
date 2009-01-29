package antipasto.CoreUnpacker;
//import org.apache.xpath.operations.*;



import java.lang.String;
import java.io.File;

import antipasto.CoreFactory;

/**
 * Created by IntelliJ IDEA.
 * User: Omar
 */
public class CoreUnpackerCommandLine {
    public static void main(String args[])
    {
        /*
        * Todo: Determine the core extension
        * ToDo: Determine how we're going to hook this into the current IDE (from the sketchbook load?)
        * */
        if(args.length < 2)
        {
            System.out.println("Incorrect number of command line arguements");
        }
        else
        {
            String sourceFile = args[0];
            String outputPath = args[1];

            CoreFactory fact = new CoreFactory();
            File sourceCore = new File(sourceFile);
            File destinationDirectory = new File(outputPath);

            if(sourceCore.exists())
            {
                if(!destinationDirectory.exists())
                {
                    destinationDirectory.mkdir();
                }
                try {
                    fact.UnpackCore(sourceCore, outputPath);
                } catch (Exception e) {
                    e.printStackTrace();  //To change body of catch statement use File | Settings | File Templates.
                }
            }
            else
            {
                System.out.println("Core file does not exist");
            }
        }
    }
}