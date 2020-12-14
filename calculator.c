--using System;
 
namespace kunst
{
	internal class MainClass
	{
		public static void Main(string[] args)
		{
			Random random = new Random();
			Console.WriteLine("Hvor gammel er du?");
			int num = Convert.ToInt32(Console.ReadLine());
			if (num >= 18)
			{
				while (true)
				{
					Console.WriteLine("////////////////////////");
					Console.WriteLine("// Velg et alternativ //");
					Console.WriteLine("////////////////////////");
					Console.WriteLine("1 - plussing");
					Console.WriteLine("2 - minus ");
					Console.WriteLine("3 - ganging");
					Console.WriteLine("4 - deling");
					Console.WriteLine("5 - vise tall fra 1-100");
					double num2 = Convert.ToDouble(Console.ReadLine());
					if (num2 == 1.0)
					{
						Console.WriteLine("Du har valgt plussing! Skriv et tall du vil plusse med");
						double num3 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine("Skriv et annet tall");
						double num4 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine(num3 + " pluss " + num4 + " = ");
						Console.WriteLine(num3 + num4);
						Console.Write("\n \n");
						Console.WriteLine("Trykk på en knapp for å starte på nytt...");
						Console.ReadKey();
						Console.WriteLine();
					}
					else if (num2 == 2.0)
					{
						Console.WriteLine("Du har valgt minus! Skriv et tall du vil trekke fra");
						double num5 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine("Skriv et annet tall");
						double num6 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine(num5 + " minus " + num6 + " = ");
						Console.WriteLine(num5 - num6);
						Console.Write("\n \n");
						Console.WriteLine("Trykk på en knapp for å starte på nytt...");
						Console.ReadKey();
						Console.WriteLine();
					}
					else if (num2 == 3.0)
					{
						Console.WriteLine("Du har valgt ganging! Skriv et tall du vil gange med");
						double num7 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine("Skriv et annet tall");
						double num8 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine(num7 + " ganger " + num8 + " = ");
						Console.WriteLine(num7 * num8);
						Console.Write("\n \n");
						Console.WriteLine("Trykk på en knapp for å starte på nytt...");
						Console.ReadKey();
						Console.WriteLine();
					}
					else if (num2 == 4.0)
					{
						Console.WriteLine("Du har valgt deling! Skriv et tall du vil dele med");
						double num9 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine("Skriv et annet tall");
						double num10 = Convert.ToDouble(Console.ReadLine());
						Console.WriteLine(num9 + " delt på " + num10 + " = ");
						Console.WriteLine(num9 / num10);
						Console.Write("\n \n");
						Console.WriteLine("Trykk på en knapp for å starte på nytt...");
						Console.ReadKey();
						Console.WriteLine();
					}
					else if (num2 == 5.0)
					{
						Console.WriteLine("Du har valgt tall fra 1-100!");
						Console.WriteLine();
						for (int i = 1; i <= 100; i++)
						{
							Console.WriteLine(i);
						}
						Console.Write("\n \n");
						Console.WriteLine("Trykk på en knapp for å starte på nytt...");
						Console.ReadKey();
						Console.WriteLine();
					}
					else
					{
						Console.WriteLine("Det er ikke et av alternativene...");
						Console.WriteLine();
					}
				}
			}
			if (num >= 130)
			{
				switch (random.Next(1, 5))
				{
				default:
					Console.WriteLine("Hvordan ble du så gammel?");
					break;
				case 2:
					Console.WriteLine("Om du er så gammel, så behøver du vel ikke kalkulator vel?");
					break;
				case 3:
					Console.WriteLine("Du er litt for gammel for å bruke kalkulator!");
					break;
				case 4:
					Console.WriteLine("Du har nok av andre ting å tenke på!");
					break;
				}
				Console.ReadKey();
			}
			else
			{
				switch (random.Next(1, 5))
				{
				default:
					Console.WriteLine("Du er ikke gammel nok!");
					break;
				case 2:
					Console.WriteLine("Hvorfor prøver du i det hele tatt?");
					break;
				case 3:
					Console.WriteLine("Du bør kunne regne uten kalkulator..");
					break;
				case 4:
					Console.WriteLine("Prøv igjen om noen år!");
					break;
				}
				Console.ReadKey();
			}
		}
	}
}
 
