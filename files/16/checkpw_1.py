class Factory:
    def main(self):
        factory = Factory()
        user_input = input("Enter vault password: ")
        if factory.check_password(user_input):
            print("Access granted.")
        else:
            print("Access denied!")

    def check_password(self, password):
        return (
            len(password) == 32 and
            password[0] == 'Y' and
            password[15] == 'k' and
            password[1] == 'n' and
            password[21] == 'D' and
            password[4] == 'Y' and
            password[25] == 'm' and
            password[20] == 'b' and
            password[11] == 'l' and
            password[5] == '3' and
            password[16] == 'Z' and
            password[2] == 'l' and
            password[8] == 'e' and
            password[6] == 'R' and
            password[3] == '1' and
            password[28] == 'Z' and
            password[22] == 'N' and
            password[10] == 'J' and
            password[23] == 'f' and
            password[26] == 'w' and
            password[12] == 'Y' and
            password[9] == '3' and
            password[13] == 'S' and
            password[17] == 'W' and
            password[14] == 'Q' and
            password[19] == 'i' and
            password[24] == 'Z' and
            password[30] == '0' and
            password[27] == '0' and
            password[31] == 'K' and
            password[29] == '3' and
            password[18] == '1' and
            password[7] == 'm'
        )

if __name__ == "__main__":
    Factory().main()


