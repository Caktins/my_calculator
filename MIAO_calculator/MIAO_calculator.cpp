#include <MIAO_calculator.h>
#include <QtMath>
#include <math.h>
#include <qtimer.h>
#include <iostream>
#include <string>
#include <algorithm> 

//using namespace std;

MIAO_calculator::MIAO_calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	radix = 10;
	pow_x = 0;
	pow_y = 0;
	ans_num = 0;

	F_or_L = true;
	flag_div = false;
	flag_minus = false;
	flag_mul = false;
	flag_plus = false;
	flag_power = false;
	flag_mod = false;

	flag_equal = false;
	flag_log10 = false;
	flag_ln = false;
	flag_sin = false;
	flag_cos = false;
	flag_tan = false;
	flag_arcsin = false;
	flag_arccos = false;
	flag_arctan = false;
	flag_sinh = false;
	flag_cosh = false;
	flag_tanh = false;
	flag_factorial = false;

	connect(ui.button_binary, SIGNAL(toggled(bool)), this, SLOT(on_binary()));
	connect(ui.button_octal, SIGNAL(toggled(bool)), this, SLOT(on_octal()));
	connect(ui.button_decimal, SIGNAL(toggled(bool)), this, SLOT(on_decimal()));
	connect(ui.button_hex, SIGNAL(toggled(bool)), this, SLOT(on_hex()));
}

void MIAO_calculator::on_button_0_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		if (!former_num_str.length())
			return;
		former_num_str += "0";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		if (!latter_num_str.length())
			return;
		latter_num_str += "0";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_1_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "1";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "1";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_2_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "2";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "2";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_3_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "3";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "3";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_4_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "4";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "4";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_5_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "5";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "5";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_6_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "6";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "6";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_7_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "7";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "7";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_8_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "8";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "8";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_9_clicked()
{
	after_equeal();
	if (F_or_L)
	{
		former_num_str += "9";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += "9";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_plus_clicked()
{
	check_exp();
	//ui.show_ans->setText("+");
	//ui.show_ans->setText(ui.show_ans->toPlainText() + "+");
	flag_plus = true;
}

void MIAO_calculator::on_button_minus_clicked()
{
	//ui.show_ans->setText("-");
	check_exp();
	flag_minus = true;
}

void MIAO_calculator::on_button_mul_clicked()
{
	//ui.show_ans->setText("×");
	check_exp();
	flag_mul = true;
}

void MIAO_calculator::on_button_div_clicked()
{
	//ui.show_ans->setText("÷");
	check_exp();
	flag_div = true;
}

void MIAO_calculator::on_button_equal_clicked()
{
	//ui.show_ans->setText("=");
	check_exp();
	flag_equal = true;
	//ui.show_ans->setText(QString::number(ans_num));
	//show the number in the certain radix
	int_ans_num = (int) ans_num;
	char temp_tran_radix[100];
	if (radix < 10) 
	{ 
		for (int i = 0; i < radix; i++)
			temp_tran_radix[i] = i + 48;
	}
	else
	{
		for (int i = 0; i < radix; i++)
			temp_tran_radix[i] = i + 48;
		for (int i = 10; i < radix; i++)
			temp_tran_radix[i] = 'A' + i - 10;
	}
	radix_str.clear();
	int quotient, remainder;
	if (int_ans_num < radix)
	{
		ui.show_ans->setText(QString::number(ans_num));
		return;
	}
	while (int_ans_num >= radix)
	{
		quotient = int_ans_num / radix;
		remainder = int_ans_num % radix;
		radix_str += temp_tran_radix[remainder];
		int_ans_num = quotient;
	}
	radix_str += temp_tran_radix[quotient];
	QString temp_radix_str;
	temp_radix_str.clear();
	while (radix_str.length())
	{
		temp_radix_str+=radix_str.mid(radix_str.length() - 1, 1);
		radix_str.remove(radix_str.length() - 1, 1);
	}
	ui.show_ans->setText(temp_radix_str);
	//ui.show_ans->setText(QString::number(radix));
	//F_or_L = true;
	//note：前有return语句，故不要在该段代码末端添加语句
}

void MIAO_calculator::on_button_plot_clicked()
{
	if (F_or_L)
	{
		former_num_str += ".";
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str += ".";
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::after_equeal()
{
	if (flag_equal)
	{
		flag_equal = false;
		former_num_str.clear();
		latter_num_str.clear();
		former_num = 0;
		latter_num = 0;
		ans_num = 0;
		F_or_L = true;
		flag_div = false;
		flag_minus = false;
		flag_mul = false;
		flag_plus = false;
		flag_power = false;
		ui.show_ans->clear();
	}		
}

void MIAO_calculator::check_exp()
{
	flag_equal = false;
	if (F_or_L)
	{
		former_num = former_num_str.toFloat();
		former_num_str.clear();
		if (flag_log10)
		{
			former_num = log10(former_num);
			flag_log10 = false;
		}
		else if (flag_ln)
		{
			former_num = log(former_num);
			flag_ln = false;
		}
		else if (flag_sin)
		{
			former_num = sin(former_num);
			flag_sin = false;
		}
		else if (flag_cos)
		{
			former_num = cos(former_num);
			flag_cos = false;
		}
		else if (flag_tan)
		{
			former_num = tan(former_num);
			flag_tan = false;
		}
		else if (flag_arcsin)
		{
			former_num = asin(former_num);
			flag_arcsin = false;
		}
		else if (flag_arccos)
		{
			former_num = acos(former_num);
			flag_arccos = false;
		}
		else if (flag_arctan)
		{
			former_num = atan(former_num);
			flag_arctan = false;
		}
		else if (flag_sinh)
		{
			former_num = sinh(former_num);
			flag_sinh = false;
		}
		else if (flag_cosh)
		{
			former_num = cosh(former_num);
			flag_cosh = false;
		}
		else if (flag_tanh)
		{
			former_num = tanh(former_num);
			flag_tanh = false;
		}
		else if (flag_factorial)
		{
			int temp = 1;
			while (former_num)
			{
				temp *= former_num;
				former_num--;
			}
			former_num = temp;
		}

		ans_num = former_num;
		//ui.show_ans->setText(" ");
		//ui.show_ans->clear();
		ui.show_ans->setText(QString::number(former_num));
		F_or_L = false;
	}
	else
	{
		latter_num = latter_num_str.toFloat();
		latter_num_str.clear();
		if (flag_log10)
		{
			latter_num = log10(latter_num);
			flag_log10 = false;
		}
		else if (flag_ln)
		{
			latter_num = log(latter_num);
			flag_ln = false;
		}
		else if (flag_sin)
		{
			latter_num = sin(latter_num);
			flag_sin = false;
		}
		else if (flag_cos)
		{
			latter_num = cos(latter_num);
			flag_cos = false;
		}
		else if (flag_tan)
		{
			latter_num = tan(latter_num);
			flag_tan = false;
		}
		else if (flag_arcsin)
		{
			latter_num = asin(latter_num);
			flag_arcsin = false;
		}
		else if (flag_arccos)
		{
			latter_num = acos(latter_num);
			flag_arccos = false;
		}
		else if (flag_arctan)
		{
			latter_num = atan(latter_num);
			flag_arctan = false;
		}
		else if (flag_sinh)
		{
			latter_num = sinh(latter_num);
			flag_sinh = false;
		}
		else if (flag_cosh)
		{
			latter_num = cosh(latter_num);
			flag_cosh = false;
		}
		else if (flag_tanh)
		{
			latter_num = tanh(latter_num);
			flag_tanh = false;
		}
		else if (flag_factorial)
		{
			int temp = 1;
			while (latter_num)
			{
				temp *= latter_num;
				latter_num--;
			}
			latter_num = temp;
		}
//		以上为单项运算，例如！，sin等可以和四则运算等混合
		/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
		if (flag_div)
		{
			ans_num = former_num / latter_num;
			flag_div = false;
		}
		else if (flag_minus)
		{
			ans_num = former_num - latter_num;
			flag_minus = false;
		}
		else if (flag_mul)
		{
			ans_num = former_num * latter_num;
			flag_mul = false;
		}
		else if (flag_plus)
		{
			ans_num = former_num + latter_num;
			flag_plus = false;
		}
		else if (flag_power)
		{
			pow_x = former_num;
			pow_y = latter_num;
			ans_num = qPow(pow_x, pow_y);
			flag_power = false;
		}
		else if (flag_mod)
		{
			ans_num = fmod(former_num, latter_num);
			flag_mod = false;
		}
		former_num = ans_num;
		ui.show_ans->setText(QString::number(ans_num));
		QEventLoop eventloop;
		QTimer::singleShot(1000, &eventloop, SLOT(quit())); //暂时一段时间
		eventloop.exec();
		former_num_str = QString::number(ans_num);
		ui.show_ans->clear();
	}
}

void MIAO_calculator::on_button_del_clicked()
{
	if (F_or_L)
	{
		former_num_str.remove(former_num_str.length() - 1, 1);
		ui.show_ans->setText(former_num_str);
	}
	else
	{
		latter_num_str.remove(latter_num_str.length() - 1, 1);
		ui.show_ans->setText(latter_num_str);
	}
}

void MIAO_calculator::on_button_clear_clicked()
{
	former_num_str.clear();
	latter_num_str.clear();
	former_num = 0;
	latter_num = 0;
	ans_num = 0;
	pow_x = 0;
	pow_y = 0;
	F_or_L = true;
	flag_div = false;
	flag_minus = false;
	flag_mul = false;
	flag_plus = false;
	flag_power = false;
	flag_mod = false;
	flag_equal = false;

	flag_log10 = false;
	flag_ln = false;
	flag_sin = false;
	flag_cos = false;
	flag_tan = false;
	flag_arcsin = false;
	flag_arccos = false;
	flag_arctan = false;
	flag_sinh = false;
	flag_cosh = false;
	flag_tanh = false;
	flag_factorial = false;
	ui.show_ans->clear();
}

void MIAO_calculator::on_binary()
{
	if (ui.button_binary->isChecked())
		radix = 2;	
}

void MIAO_calculator::on_octal()
{
	if (ui.button_octal->isChecked())
		radix = 8;
}

void MIAO_calculator::on_decimal()
{
	if (ui.button_decimal->isChecked())
		radix = 10;
}

void MIAO_calculator::on_hex()
{
	if (ui.button_hex->isChecked())
		radix = 16;
}

void MIAO_calculator::on_button_square_clicked()
{
	if (ui.button_square->text() == "x^2")
	{
		pow_y = 2;
		if (F_or_L)
		{
			pow_x = former_num_str.toFloat();
			former_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(former_num_str);
			//F_or_L = false;
		}
		else
		{
			pow_x = latter_num_str.toFloat();
			latter_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(latter_num_str);
		}
	}
	if (ui.button_square->text() == "x^1/2")
	{
		pow_y = 0.5;
		if (F_or_L)
		{
			pow_x = former_num_str.toFloat();
			former_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(former_num_str);
			//F_or_L = false;
		}
		else
		{
			pow_x = latter_num_str.toFloat();
			latter_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(latter_num_str);
		}
	}
	if (ui.button_square->text() == "log")
		flag_log10 = true;
	if (ui.button_square->text() == "mod")
	{
		check_exp();
		flag_mod = true;
	}
}

void MIAO_calculator::on_button_cube_clicked()
{
	if (ui.button_cube->text() == "x^3")
	{
		pow_y = 3;
		if (F_or_L)
		{
			pow_x = former_num_str.toFloat();
			former_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(former_num_str);
			//F_or_L = false;
		}
		else
		{
			pow_x = latter_num_str.toFloat();
			latter_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(latter_num_str);
			//ui.show_ans->setText(QString::number(ans_num));
		}
	}
	if (ui.button_cube->text() == "x^1/3")
	{
		pow_y = 0.333333;
		if (F_or_L)
		{
			pow_x = former_num_str.toFloat();
			former_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(former_num_str);
			//F_or_L = false;
		}
		else
		{
			pow_x = latter_num_str.toFloat();
			latter_num_str = QString::number(qPow(pow_x, pow_y));
			ui.show_ans->setText(latter_num_str);
			//ui.show_ans->setText(QString::number(ans_num));
		}

	}
	if (ui.button_cube->text() == "ln")
		flag_ln = true;
	if (ui.button_cube->text() == "!")
		flag_factorial = true;
}

void MIAO_calculator::on_button_power_clicked()
{
	if (ui.button_power->text() == "y^x")
	{
		check_exp();
		flag_power = true;
	}
	if (ui.button_power->text() == "sin")
		flag_sin = true;
	if (ui.button_power->text() == "arcsin")
		flag_arcsin = true;
	if (ui.button_power->text() == "sinh")
		flag_sinh = true;
}

void MIAO_calculator::on_button_e_clicked()
{
	if (ui.button_e->text() == "e")
	{
		after_equeal();
		if (F_or_L)
		{
			former_num_str = QString::number(M_E);
			ui.show_ans->setText("e");
		}
		else
		{
			latter_num_str = QString::number(M_E);
			ui.show_ans->setText("e");
		}
	}
	if (ui.button_e->text() == "cos")
		flag_cos = true;
	if (ui.button_e->text() == "arccos")
		flag_arccos = true;
	if (ui.button_e->text() == "cosh")
		flag_cosh = true;
}

void MIAO_calculator::on_button_pi_clicked()
{
	if (ui.button_pi->text() == "PI")
	{
		after_equeal();
		if (F_or_L)
		{
			former_num_str = QString::number(M_PI);
			ui.show_ans->setText("PI");
		}
		else
		{
			latter_num_str = QString::number(M_PI);
			ui.show_ans->setText("PI");
		}
	}
	if (ui.button_pi->text() == "tan")
		flag_tan = true;
	if (ui.button_pi->text() == "arctan")
		flag_arctan = true;
	if (ui.button_pi->text() == "tanh")
		flag_tanh = true;
}

void MIAO_calculator::on_button_menu_clicked()
{
	if (ui.button_menu->text() == "Menu1")
	{
		ui.button_menu->setText("Menu2");
		ui.button_square->setText("x^1/2");
		ui.button_cube->setText("x^1/3");
		ui.button_power->setText("sin");
		ui.button_e->setText("cos");
		ui.button_pi->setText("tan");
	}		
	else if (ui.button_menu->text() == "Menu2")
	{
		ui.button_menu->setText("Menu3");
		ui.button_square->setText("log");
		ui.button_cube->setText("ln");
		ui.button_power->setText("arcsin");
		ui.button_e->setText("arccos");
		ui.button_pi->setText("arctan");
	}
	else if (ui.button_menu->text() == "Menu3")
	{
		ui.button_menu->setText("Menu4");
		ui.button_square->setText("mod");
		ui.button_cube->setText("!");
		ui.button_power->setText("sinh");
		ui.button_e->setText("cosh");
		ui.button_pi->setText("tanh");
	}
	else if (ui.button_menu->text() == "Menu4")
	{
		ui.button_menu->setText("Menu1");
		ui.button_square->setText("x^2");
		ui.button_cube->setText("x^3");
		ui.button_power->setText("x^y");
		ui.button_e->setText("e");
		ui.button_pi->setText("Pi");
	}
}

