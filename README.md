# Problema-unibuc---admitere-licenta-informatica
(a) Se cite¸ste un num˘ar natural L (20 ≤ L ≤ 1000) ¸si un ¸sir de cel mult 10000 de caractere ce
cont¸ine cuvinte desp˘art¸ite ˆıntre ele prin cˆate un spat¸iu. Fiecare cuvˆant din ¸sirul de caractere
citit este format din cel mult L litere mari ale alfabetului englez. S˘a se scrie un program care
afi¸seaz˘a aceste cuvinte, ˆın ordinea ˆın care se citesc, pe linii de cel mult L caractere, astfel ˆıncˆat
orice linie ˆıncepe ¸si se termin˘a cu un cuvˆant ¸si oricare dou˘a cuvinte de pe aceea¸si linie sunt
separate printr-un singur spat¸iu. Oricare linie este folosit˘a la maxim, adic˘a dac˘a un cuvˆant
are loc pe acea linie va fi pus acolo ¸si nu va fi trecut pe linia urm˘atoare sau spart pe 2 linii.
Exemplu: se cite¸ste L = 22 ¸si ¸sirul de caractere PROBLEMA DE LA EXAMEN NU MI SE PARE
FOARTE GREU DE REZOLVAT IN TIMPUL ACORDAT. Programul va afi¸sa:
PROBLEMA DE LA EXAMEN
NU MI SE PARE FOARTE
GREU DE REZOLVAT IN
TIMPUL ACORDAT
(b) ˆIntr-un text formatat pe linii ca la punctul (a), dou˘a spat¸ii sunt conectate dac˘a se ˆınvecineaz˘a
pe vertical˘a sau pe diagonal˘a. Pentru textul formatat mai sus avem mai multe exemple de
spat¸ii conectate: spat¸iul de pe pozit¸ia 9, linia 1, ce separ˘a literele A ¸si D este conectat cu cel
de pe pozit¸ia 9, linia 2; spat¸iul de pe pozit¸ia 15, linia 1, este conectat cu cel de pe pozit¸ia 14,
linia 2. Spat¸iul de pe pozit¸ia 3, linia 2, nu este conectat cu niciun alt spat¸iu. S˘a se scrie un
program care cite¸ste numerele naturale L, N ¸si apoi un text formatat pe N linii de cel mult L
caractere ca la punctul (a) ¸si afi¸seaz˘a mesajul DA dac˘a ˆın tot textul exist˘a cel put¸in o pereche
de spat¸ii conectate, altfel afi¸seaz˘a mesajul NU.
(c) ˆIn arta tipografic˘a un rˆau este o ˆın¸siruire de spat¸ii care se ˆıntinde pe vertical˘a, pe liniile
consecutive ale unui text. Mai precis, un rˆau este definit ca o secvent¸˘a de cel put¸in 2 spat¸ii
ˆın care oricare 2 spat¸ii de pe linii consecutive sunt conectate. Spre exemplu, pentru textul
de la punctul (a), avem un rˆau de lungime 4 format din: spat¸iul de pe pozit¸ia 9, linia 1;
spat¸iul de pe pozit¸ia 9, linia 2; spat¸iul de pe pozit¸ia 8, linia 3 ¸si spat¸iul de pe pozit¸ia 7, linia
4. De remarcat, faptul c˘a de pe pozit¸ia 17, linia 3, nu porne¸ste nici un rˆau ˆıntrucˆat linia 4 se
termin˘a pe pozit¸ia 14. S˘a se scrie un program, cu o complexitate de timp cˆat mai bun˘a, care
cite¸ste numerele naturale L, N ¸si apoi un text formatat pe N linii de cel mult L caractere ca
la punctul (a) ¸si afi¸seaz˘a lungimea celui mai lung rˆau posibil, dac˘a acesta exist˘a sau mesajul
NU, dac˘a nu exist˘a niciun rˆau
