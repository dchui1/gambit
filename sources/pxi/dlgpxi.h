//
// $Source$
// $Date$
// $Revision$
//
// DESCRIPTION: 
// Dialogs for PXI
//

#ifndef DLGPXI_H
#define DLGPXI_H

#include "wx/slider.h"

#include "gui/wxmisc.h"
#include "base/gstream.h"
#include "pxi.h"
#include "pxiplot.h"
#include "expdata.h"

// ----------------------------------------------------------------------
//
//     dialogPlotOptions
//
// ----------------------------------------------------------------------

class dialogPlotOptions : public guiAutoDialog {
private:
  PlotInfo &thisplot;       // information about plot
  wxCheckBox m_axis, m_labels, m_ticks, m_nums, m_square;

  const char *HelpString(void) const { return "Plot Options"; }
  
  void Run(void);
public:
  dialogPlotOptions(wxWindow *, PlotInfo &);
  virtual ~dialogPlotOptions();
};

// ----------------------------------------------------------------------
//
//     dialogOverlayOptions
//
// ----------------------------------------------------------------------

class dialogOverlayOptions : public guiAutoDialog {
private:
  PxiDrawSettings &draw_settings;
  wxRadioBox *m_token;
  wxCheckBox *m_connect;
  wxSlider *m_size;
  
  const char *HelpString(void) const { return "Overlay Options"; }
  void Run(void);
public:
  dialogOverlayOptions(wxWindow *, PxiDrawSettings &);
  virtual ~dialogOverlayOptions();
};

class dialogSelectScale : public guiAutoDialog {
private:
  wxRadioBox *m_size;
  
  const char *HelpString(void) const { return "Change Scale"; }
public:
  dialogSelectScale(wxWindow *, double scale);
  virtual ~dialogSelectScale();
  double GetScale(void);
};

const int idEXPDATA_BROWSE1_BUTTON = 3051;
const int idEXPDATA_BROWSE2_BUTTON = 3052;

#endif 



