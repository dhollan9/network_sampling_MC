#include "constrainParms.h"
#include "read_iin_parms.h"

void read_iin_parms(ifstream &parmfile, constrainParms &plist)
{
  parmfile >>plist.nwhole;
  parmfile.ignore(400,'\n');
  parmfile >>plist.Nedge;
  parmfile.ignore(400,'\n');
  
  /*Now read in network parameters, which control swaps between network
    selections*/
  parmfile >>plist.Nit_net;
  parmfile.ignore(400,'\n');
  parmfile >>plist.MCtemp;
  parmfile.ignore(400,'\n');
  parmfile >>plist.netwrite;
  parmfile.ignore(400,'\n');
  parmfile >>plist.flagsplit;
  parmfile.ignore(400,'\n');
 
  parmfile >>plist.beta;
  parmfile.ignore(400,'\n');
  parmfile >>plist.mu;
  parmfile.ignore(400,'\n');

  parmfile >>plist.kappa;
  parmfile.ignore(400,'\n');
  parmfile >>plist.omega;
  parmfile.ignore(400,'\n');
  parmfile >>plist.zeta;
  parmfile.ignore(400,'\n');
  
  parmfile >>plist.fitnessflag;
  parmfile.ignore(400,'\n');

  parmfile >>plist.PAEflag;
  parmfile.ignore(400,'\n');
}

