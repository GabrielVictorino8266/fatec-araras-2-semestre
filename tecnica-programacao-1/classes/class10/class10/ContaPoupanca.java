import java.text.SimpleDateFormat;
import java.util.Date;

public class ContaPoupanca extends Conta
{
    @Override
    public void imprimeExtrato()
    {
        System.out.println("Extrato conta poupança");
        SimpleDateFormat data = new SimpleDateFormat("dd/MM/yyyy");
        Date date = new Date();
        System.out.println("Saldo: "+this.getSaldo());
        System.out.println("Data: "+data.format(date));
    }
}