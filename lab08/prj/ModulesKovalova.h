#ifndef MODULESKOVALOVA_H_INCLUDED
#define MODULESKOVALOVA_H_INCLUDED

double s_calculation(double x, double y, double z);
double gas_payment(double volume);
void shoes(float sizes);
int binary_count(int N);
void task_selector(char option);

void analyze_text_file(const std::string& input_file, const std::string& output_file);
void append_punctuation_and_timestamp(const std::string& input_file);
void append_results_to_file(const std::string& output_file, double x, double y, double z, int b);

#endif // MODULESKOVALOVA_H_INCLUDED
