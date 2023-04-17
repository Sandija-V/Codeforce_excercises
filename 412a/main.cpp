#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,i;
	string s;
	cin >> n >> k >> s;

	/*
	checks if it is faster to move the cursor to the right end of the line and print out the characters in reverse order,
	or to move the cursor to the left end of the line and print out the characters in order.
	If n-k<k-1, the program first moves the cursor to the right end of the line by outputting RIGHT
	commands until the cursor is at position n-1.
	*/
	if(n-k<k-1){
		for(i=k-1;i<n-1;i++)
			cout << "RIGHT\n";
        /*
        Prints out the characters in reverse order, moving the cursor left after each character is printed,
        except for the last character.
        */
		for(i;i>=0;i--){
			cout << "PRINT " << s[i] << endl;
			if(i!=0)
                cout << "LEFT\n";
		}
	}else{
        /*
        If n-k>=k-1, the program first moves the cursor to the left end of the line by outputting LEFT commands
        until the cursor is at position 0.
        */
		for(i=k-1;i>0;i--)
			cout << "LEFT\n";
        /*
        prints out the characters in order, moving the cursor right after each character is printed,
        except for the last character.
        */
		for(i;i<n;i++){
			cout << "PRINT " << s[i] << endl;
			if(i!=n-1)
                cout << "RIGHT\n";
		}
	}

	return 0;
}
