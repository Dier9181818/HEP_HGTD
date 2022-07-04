#include "TROOT.h"
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TPostScript.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TPaveStats.h"
#include "TPaveLabel.h"
#include "TPaveText.h"
#include "TF1.h"
#include "TMath.h"
#include "TAxis.h"
#include "TGraphErrors.h"
#include "TMultiGraph.h"
#include "TLegend.h"
#include "TLatex.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "TTree.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "TChain.h"
#include "Rtypes.h"
void combine1_geo_cut_HPK31()
{
	 gROOT->SetStyle("ATLAS");
 string batches[20] = {"b101", "b102","b103", "b104" , "b105" , "b601" , "b602", "b603" , "b604" , "b605" , "b1101", "b1102", "b1103", "b1104", "b1105", "b1201", "b1202", "b1203", "b1204", "b1205"};
 
 TFile *f[20];
 string input_files;
 const char* input_files1; 
 for (int i = 0; i <20; i++)
 {
 	input_files = "graph_rootfiles/"+batches[i]+"_Time_Resolution.root";
 	input_files1 = input_files.c_str();
 	cout<<input_files1<<endl;
 	f[i] = TFile::Open(input_files1);

 }
    
    /*
 // batche 101-105
 string g_name_b101_105_ch1;
 string g_name_b101_105_ch2;
 
 TMultiGraph *mg_b101_b105_ch1 = new TMultiGraph();
 TMultiGraph *mg_b101_b105_ch2 = new TMultiGraph();
 
 TGraph *gr1_b101_105_ch1[5];
 TGraph *gr1_b101_105_ch2[5];
 for (int i =0; i<5; ++i)
 {
 	g_name_b101_105_ch1 = "HPK3_1_SE5IP3J1_"+batches[i];
    g_name_b101_105_ch2	= "HPK3_1_SE5IP3J3_"+batches[i];

    gr1_b101_105_ch1[i] = (TGraph*)f[i]->Get(g_name_b101_105_ch1.c_str());
    gr1_b101_105_ch2[i] = (TGraph*)f[i]->Get(g_name_b101_105_ch2.c_str());
    
    gr1_b101_105_ch1[i]->SetMarkerColor(kBlue);
    gr1_b101_105_ch1[i]->SetLineColor(0);
    gr1_b101_105_ch1[i]->SetMarkerStyle(22);
    gr1_b101_105_ch1[i]->SetMarkerSize(2);

    gr1_b101_105_ch2[i]->SetMarkerColor(616);
    gr1_b101_105_ch2[i]->SetLineColor(0);
    gr1_b101_105_ch2[i]->SetMarkerStyle(23);
    gr1_b101_105_ch2[i]->SetMarkerSize(2);

    mg_b101_b105_ch1->Add(gr1_b101_105_ch1[i]);
    mg_b101_b105_ch2->Add(gr1_b101_105_ch2[i]);
 }
  TCanvas *c_b101_105 = new TCanvas("c_b101_105", "c_b101_105");
  c_b101_105->cd();

  TMultiGraph *mg_b101_b105 = new TMultiGraph();
  mg_b101_b105->Add(mg_b101_b105_ch1);
  mg_b101_b105->Add(mg_b101_b105_ch2);
  mg_b101_b105->Draw("APL");
  mg_b101_b105->GetYaxis()->SetRangeUser(30,120);
    mg_b101_b105->GetXaxis()->SetTitle("Bias Voltage [V]");
    mg_b101_b105->GetYaxis()->SetTitle("Time Resolution [ps]");
    
    TLegend *legnd_b101_b105 = new TLegend(0.5,0.8,0.9,0.9);
  legnd_b101_b105->AddEntry(gr1_b101_105_ch1[0],"HPK3.1SE5IP3J1 (Unirradiated)", "lep");
  legnd_b101_b105->AddEntry(gr1_b101_105_ch2[0],"HPK3.1SETIP3J2 (Unirradiated)", "lep");
  legnd_b101_b105->SetBorderSize(1);
  legnd_b101_b105->SetTextSize(0.03);
  legnd_b101_b105->Draw();
  TLatex* ltx1 = new TLatex();
  ltx1->DrawLatex(95, 120,"#bf{HGTD TestBeam}");
  c_b101_105->SaveAs("b101_105_cfd50.pdf");
*/
 //-----------%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-----------------------------------------------------

// batche 601-605
 string g_name_b601_605_ch1;
 //string g_name_b601_605_ch2;
 
 TMultiGraph *mg_b601_b605_ch1 = new TMultiGraph();
 //TMultiGraph *mg_b601_b605_ch2 = new TMultiGraph();
 
 TGraph *gr1_b601_605_ch1[5];
 //TGraph *gr1_b601_605_ch2[5];
 for (int i =0; i<5; ++i)
 {
 	g_name_b601_605_ch1 = "HPK_3_1_W8P2LGE5_"+batches[i+5];
    //g_name_b601_605_ch2	= "HPK_3_2_W18P4LGE5_"+batches[i+5];

    gr1_b601_605_ch1[i] = (TGraph*)f[i+5]->Get(g_name_b601_605_ch1.c_str());
    //gr1_b601_605_ch2[i] = (TGraph*)f[i+5]->Get(g_name_b601_605_ch2.c_str());
    
    gr1_b601_605_ch1[i]->SetMarkerColor(kOrange+2);
    gr1_b601_605_ch1[i]->SetLineColor(0);
    gr1_b601_605_ch1[i]->SetMarkerStyle(25);
    gr1_b601_605_ch1[i]->SetMarkerSize(2);

    //gr1_b601_605_ch2[i]->SetMarkerColor(kOrange+2);
    //gr1_b601_605_ch2[i]->SetLineColor(0);
    //gr1_b601_605_ch2[i]->SetMarkerSize(2);

    mg_b601_b605_ch1->Add(gr1_b601_605_ch1[i]);
    //mg_b601_b605_ch2->Add(gr1_b601_605_ch2[i]);
 }

 /*TCanvas *c_b601_605 = new TCanvas("c_b601_605", "c_b601_605");
  c_b601_605->cd();

  TMultiGraph *mg_b601_b605 = new TMultiGraph();
  mg_b601_b605->Add(mg_b601_b605_ch1);
  mg_b601_b605->Add(mg_b601_b605_ch2);
  mg_b601_b605->GetYaxis()->SetRangeUser(20,90);
  mg_b601_b605->GetXaxis()->SetLimits(230, 600);
  mg_b601_b605->Draw("APL");
    mg_b601_b605->GetXaxis()->SetTitle("Bias Voltage [V]");
    mg_b601_b605->GetYaxis()->SetTitle("Time Resolution [ps]");
    TLegend *legnd_b601_b605 = new TLegend(0.45,0.75,0.94,0.88);
  legnd_b601_b605->AddEntry(gr1_b601_605_ch1[0],"HPK3.1W8P2LGE5 (8e14n)", "lep");
  legnd_b601_b605->AddEntry(gr1_b601_605_ch2[0],"HPK3.2W18P4LGE5 (8e14n)", "lep");
  legnd_b601_b605->SetBorderSize(1);
  legnd_b601_b605->SetTextSize(0.04);
  legnd_b601_b605->Draw();
 
  ltx1->DrawLatex(230, 90,"#bf{HGTD TestBeam}");
  c_b601_605->SaveAs("b601_605_cfd50.pdf");
*/

//-----------%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-----------------------------------------------------
// batch 1101- 1105

string g_name_b1101_1105_ch1;
 
 TMultiGraph *mg_b1101_b1105_ch1 = new TMultiGraph();
 TMultiGraph *mg_b1101_b1105_ch2 = new TMultiGraph();
 
 TGraph *gr1_b1101_1105_ch1[5];
 for (int i =0; i<5; ++i)
 {
 	g_name_b1101_1105_ch1 = "HPK3_1W8LGE5_"+batches[i+10];
   
    gr1_b1101_1105_ch1[i] = (TGraph*)f[i+10]->Get(g_name_b1101_1105_ch1.c_str()); 
    gr1_b1101_1105_ch1[i]->SetMarkerColor(kCyan +1);
    gr1_b1101_1105_ch1[i]->SetLineColor(0);
    gr1_b1101_1105_ch1[i]->SetMarkerStyle(23);
    gr1_b1101_1105_ch1[i]->SetMarkerSize(2);

    mg_b1101_b1105_ch1->Add(gr1_b1101_1105_ch1[i]);
    
 }
/*
TCanvas *c_b1101_1105 = new TCanvas("c_b1101_1105", "c_b1101_1105");
  c_b1101_1105->cd();

  TMultiGraph *mg_b1101_b1105 = new TMultiGraph();
  mg_b1101_b1105->Add(mg_b1101_b1105_ch1);
  mg_b1101_b1105->GetYaxis()->SetRangeUser(30,70);
  mg_b1101_b1105->GetXaxis()->SetLimits(500, 750);
  mg_b1101_b1105->Draw("APL");
    mg_b1101_b1105->GetXaxis()->SetTitle("Bias Voltage [V]");
    mg_b1101_b1105->GetYaxis()->SetTitle("Time Resolution [ps]");
  TLegend *legnd_b1101_b1105 = new TLegend(0.5,0.75,0.93,0.9);
  legnd_b1101_b1105->AddEntry(gr1_b1101_1105_ch1[0], "HPK3.1W8LGE5 (1e15p)", "lep");

  legnd_b1101_b1105->SetBorderSize(1);
  legnd_b1101_b1105->SetTextSize(0.04);
  legnd_b1101_b1105->Draw();
 
  ltx1->DrawLatex(500, 70,"#bf{HGTD TestBeam}");
  c_b1101_1105->SaveAs("b1101_1105_cfd50.pdf");
*/
//-----------%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-----------------------------------------------------

// 1201-1205

 string g_name_b1201_1205_ch1;
 //string g_name_b1201_1205_ch2;
 
 TMultiGraph *mg_b1201_b1205_ch1 = new TMultiGraph();
 //TMultiGraph *mg_b1201_b1205_ch2 = new TMultiGraph();
 
 TGraph *gr1_b1201_1205_ch1[5];
 //TGraph *gr1_b1201_1205_ch2[5];
 for (int i =0; i<5; ++i)
 {
 	g_name_b1201_1205_ch1 = "HPK3_1W8LGE2_"+batches[i+15];
    //g_name_b1201_1205_ch2 = "HPK3_2W18LGE500_"+batches[i+15];

    gr1_b1201_1205_ch1[i] = (TGraph*)f[i+15]->Get(g_name_b1201_1205_ch1.c_str());
    //gr1_b1201_1205_ch2[i] = (TGraph*)f[i+15]->Get(g_name_b1201_1205_ch2.c_str());
    
    gr1_b1201_1205_ch1[i]->SetMarkerColor(kRed);
    gr1_b1201_1205_ch1[i]->SetLineColor(0);
    gr1_b1201_1205_ch1[i]->SetMarkerStyle(34);
    gr1_b1201_1205_ch1[i]->SetMarkerSize(2);

    /*gr1_b1201_1205_ch2[i]->SetMarkerStyle(28);
    gr1_b1201_1205_ch2[i]->SetMarkerColor(kRed);
    gr1_b1201_1205_ch2[i]->SetLineColor(0);
    gr1_b1201_1205_ch2[i]->SetMarkerSize(2);*/

    mg_b1201_b1205_ch1->Add(gr1_b1201_1205_ch1[i]);
    //mg_b1201_b1205_ch2->Add(gr1_b1201_1205_ch2[i]);
 }
/*
TCanvas *c_b1201_1205 = new TCanvas("c_b1201_1205", "c_b1201_1205");
  c_b1201_1205->cd();

  TMultiGraph *mg_b1201_b1205 = new TMultiGraph();
  mg_b1201_b1205->Add(mg_b1201_b1205_ch1);
  mg_b1201_b1205->Add(mg_b1201_b1205_ch2);
  mg_b1201_b1205->GetYaxis()->SetRangeUser(20,90);
  mg_b1201_b1205->GetXaxis()->SetLimits(500, 750);
  mg_b1201_b1205->Draw("APL");
    mg_b1201_b1205->GetXaxis()->SetTitle("Bias Voltage [V]");
    mg_b1201_b1205->GetYaxis()->SetTitle("Time Resolution [ps]");
  TLegend *legnd_b1201_b1205 = new TLegend(0.5,0.75,0.93,0.9);
  legnd_b1201_b1205->AddEntry(gr1_b1201_1205_ch1[0],"HPK3.1W8LGE2 (3e15n)", "lep");
  legnd_b1201_b1205->AddEntry(gr1_b1201_1205_ch2[0], "HPK3.2W18LGE500 (3e15n)", "lep");
  legnd_b1201_b1205->SetBorderSize(1);
  legnd_b1201_b1205->SetTextSize(0.04);
  legnd_b1201_b1205->Draw();
 
  ltx1->DrawLatex(500, 90,"#bf{HGTD TestBeam}");
  c_b1201_1205->SaveAs("b1201_1205_cfd50.pdf");
*/

////-----------%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-----------------------------------------------------

  Double_t w = 1000;
  Double_t h = 800;
  TCanvas *c1 = new TCanvas("c1", "c1"); //, w, h);
  c1->cd();
  TMultiGraph *mg = new TMultiGraph();
  //mg->Add(mg_b101_b105_ch1);
  //mg->Add(mg_b101_b105_ch2);
  mg->Add(mg_b601_b605_ch1);
  //mg->Add(mg_b601_b605_ch2);
  mg->Add(mg_b1101_b1105_ch1);
  //mg->Add(mg_b1201_b1205_ch1);
  //mg->Add(mg_b1201_b1205_ch2);
  mg->GetYaxis()->SetRangeUser(30,90);
  mg->GetXaxis()->SetLimits(300, 800);
  mg->Draw("APL");
  mg->GetXaxis()->SetTitle("Bias Voltage [V]");
  mg->GetYaxis()->SetTitle("Time Resolution [ps]");  

  TLegend *legend = new TLegend(0.2,0.7,0.6,0.9);
  legend-> SetNColumns(1);
  //legend->AddEntry(gr1_b101_105_ch1[0],"HPK3.1SE5IP3J1 (Unirradiated)", "lep");
  //legend->AddEntry(gr1_b101_105_ch2[0],"HPK3.1SETIP3J2 (Unirradiated)", "lep");

  legend->AddEntry(gr1_b601_605_ch1[0],"HPK3.1W8P2LGE5 (8e14n)", "lep");
  //legend->AddEntry(gr1_b601_605_ch2[0],"HPK3.2W18P4LGE5 (8e14n)", "lep");

  legend->AddEntry(gr1_b1101_1105_ch1[0], "HPK3.1W8LGE5 (1e15p)", "lep");

  //legend->AddEntry(gr1_b1201_1205_ch1[0],"HPK3.1W8LGE2 (3e15n)", "lep");
  //legend->AddEntry(gr1_b1201_1205_ch2[0], "HPK3.2W18LGE500 (3e15n)", "lep");
  legend->SetBorderSize(1);
  legend->SetTextSize(0.03);
  legend->Draw();
  TLatex* ltx1 = new TLatex();
  ltx1->DrawLatex(300, 90,"#bf{HGTD TestBeam}");
  //c1->SaveAs("Time_Reso_Final.png");//
  c1->SaveAs("Time_Reso_Final_geo_cut_HPK31.pdf");
  
}

