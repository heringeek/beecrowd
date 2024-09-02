#include <stdio.h>

int main () {
	
	long long int hash, adv;
	while ((scanf ("%lld %lld" ,&hash ,&adv) != EOF)) {
		printf ("%lld\n" ,(hash - adv) < 0 ? (hash - adv) * - 1 : (hash - adv));
	}
	return (0);
}
