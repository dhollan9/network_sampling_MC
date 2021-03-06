#include <fstream>
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


double calc_msd_abund_target(int Npro, double *proconc, double *abund, ofstream &outfile, string *genid);
double calc_msd_nowrite_abund_target(int Npro, double *proconc, double *abund);
double calc_dist_entropy_totarget(int Npro, double *proconc, double *abund, string *genid);
double calc_dist_entropy_totarget_exclude_constrains(int Npro, double *proconc, double *abund, string *genid, int Nc, int *constrain );
double calc_corrcoef_totarget(int Npro, double *proconc, double *abund, string *genid, double &lgR);
double calc_corrcoef_totarget_exclude_constrains(int Npro, double *proconc, double *abund, string *genid, int Nc, int *constrain, double &lgR);
