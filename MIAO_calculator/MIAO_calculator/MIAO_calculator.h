#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MIAO_calculator.h"

class MIAO_calculator : public QMainWindow
{
	Q_OBJECT

public:
	MIAO_calculator(QWidget *parent = Q_NULLPTR);
	QString former_num_str;
	QString latter_num_str;
	QString radix_str;
	qreal pow_x; 
	qreal pow_y;
	int radix;
	float former_num;
	float latter_num;
	float ans_num;
	bool F_or_L;
	bool flag_plus;
	bool flag_minus;
	bool flag_mul;
	bool flag_div;
	bool flag_power;
	bool flag_mod;
	bool flag_equal;
	
	bool flag_log10;
	bool flag_ln;
	bool flag_sin;
	bool flag_cos;
	bool flag_tan;
	bool flag_arcsin;
	bool flag_arccos;
	bool flag_arctan;
	bool flag_sinh;
	bool flag_cosh;
	bool flag_tanh;

	bool flag_factorial;
	
	int int_ans_num;

private slots:
	void on_button_0_clicked();
	void on_button_1_clicked();
	void on_button_2_clicked();
	void on_button_3_clicked();
	void on_button_4_clicked();
	void on_button_5_clicked();
	void on_button_6_clicked();
	void on_button_7_clicked();
	void on_button_8_clicked();
	void on_button_9_clicked();
	void on_button_plot_clicked();
	void after_equeal();

	void on_button_plus_clicked();
	void on_button_minus_clicked();
	void on_button_mul_clicked();
	void on_button_div_clicked();	
	void on_button_equal_clicked();

	void check_exp();

	void on_button_del_clicked();
	void on_button_clear_clicked();

	void on_binary();
	void on_octal();
	void on_decimal();
	void on_hex();

	void on_button_square_clicked();
	void on_button_cube_clicked();
	void on_button_power_clicked();

	void on_button_e_clicked();
	void on_button_pi_clicked();

	void on_button_menu_clicked();

private:
	Ui::MIAO_calculatorClass ui;
};


