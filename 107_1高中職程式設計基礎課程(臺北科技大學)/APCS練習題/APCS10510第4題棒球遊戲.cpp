#include <iostream>
#include <string>

bool b[4];
int convert(std::string s)
{
	if (s.compare("1B") == 0)
        {
            return 1;
        }
	if (s.compare("2B") == 0)
        {
            return 2;
        }
	if (s.compare("3B") == 0)
        {
            return 3;
        }
	if (s.compare("HR") == 0)
        {return 4;
	if (s.compare("FO") == 0)
        {
	    return 0;
        }
	if (s.compare("GO") == 0)
        {
	    return 0;
        }
	if (s.compare("SO") == 0)
        {
            return 0;
        }
}
int win(int c)
{//c��1��ܤ@�S���A c��2��ܤG�S���C
	int s = 0;
	for (int i = 3; i>3 - c; i--)
        {//�w�g�b�S�]�W���o��
            if (b[i]) s++;
        }
	for (int i = 3; i>c; i--)
        {//�w�g�b�S�]�W���e���i
            b[i] = b[i - c];
        }
	if (c == 4)
        {
            s++; //���S��
        }
	else
        {
            b[c] = true;//�����̤W�S
        }
	for (int i = 1; i<c; i++)
        {
            b[i] = false;//���e���i�A�S�]�]�w���S���H
        }
	return s;//�^�Ǳo��
}
int main()
{
	int p[9][20], n[9],score;
	int ocount,score = 0;
	std::string s;
	for (int i = 0; i<9; i++)
        {
            cin >> n[i];
            for (int j = 0; j<n[i]; j++)
                {
                    cin >> s;
                    p[i][j] = convert(s);
                }
        }
	std::cin >> out;
	for (int i = 1; i<4; i++)
        {
            b[i] = false;
        }
	//for (int i = 0; i<n[i] && ocount<out; i++) { //�ϥΦ���Azerojudge��14�մ���L���F�A�Ӵ��ꪺ�C�쥴���̥������ƥi�ण���T
	for (int i = 0; i<9 && ocount<out; i++)
        { //n[i]�ϥ�9���N�A�N�|�q�Lzerojudge
            for (int j = 0; j< 9 && ocount<out; j++)
                {
                    if (p[j][i] > 0)
                        {//1B 2B 3B HR
                            score += win(p[j][i]);
                        }
                    else
                        {
                            ocount++;//�X��
                            if (ocount % 3 == 0)
                                {//�T�X��
                                    for (int k = 1; k<4; k++)
                                        {
                                            b[k] = false;
                                        }
                                }
                        }
                }
        }
	cout << score << endl;
}
