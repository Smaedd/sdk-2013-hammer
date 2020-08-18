//========= Copyright © 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#include "stdafx.h"
#include "MapDoc.h"
#include "MapView2D.h"
#include "resource.h"
#include "ToolTemplate.h"
#include "HammerVGui.h"
#include <VGuiMatSurface/IMatSystemSurface.h>

// memdbgon must be the last include file in a .cpp file!!!
#include <tier0/memdbgon.h>


//-----------------------------------------------------------------------------
// Purpose: Loads the cursor (only once).
//-----------------------------------------------------------------------------
CToolTemplate::CToolTemplate(void)
{
}

//-----------------------------------------------------------------------------
// Purpose: Loads template window
//-----------------------------------------------------------------------------
void CToolTemplate::OnActivate()
{
	CPoint pt;
	GetCursorPos(&pt);

	if (m_cTemplateDlg.Create(IDD_TEMPLATE))
	{
		m_cTemplateDlg.SetWindowPos(NULL, pt.x, pt.y, 0, 0, SWP_NOZORDER | SWP_NOSIZE | SWP_SHOWWINDOW);
	}
}

void CToolTemplate::OnDeactivate()
{
	m_cTemplateDlg.EndDialog(0);
}


//-----------------------------------------------------------------------------
// Purpose: 
// Input  : *pView - 
//			nFlags - 
//			point - 
// Output : Returns true on success, false on failure.
//-----------------------------------------------------------------------------
bool CToolTemplate::OnContextMenu2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint)
{
	// Return true to suppress the default view context menu behavior.
	return true;
}


//-----------------------------------------------------------------------------
// Purpose: 
// Input  : pView - 
//			nFlags - 
//			point - 
// Output : Returns true to indicate that the message was handled.
//-----------------------------------------------------------------------------
bool CToolTemplate::OnLMouseDown2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint)
{
	pView->SetZoom(pView->GetZoom() * 2);
	pView->Invalidate();
	return true;
}


//-----------------------------------------------------------------------------
// Purpose: 
// Input  : pView - 
//			nFlags - 
//			point - 
// Output : Returns true to indicate that the message was handled.
//-----------------------------------------------------------------------------
bool CToolTemplate::OnMouseMove2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint)
{
	// cursors are cached by surface
	pView->SetCursor("Resource/magnify.cur");
	return true;
}


//-----------------------------------------------------------------------------
// Purpose: 
// Input  : pView - 
//			nFlags - 
//			point - 
// Output : Returns true to indicate that the message was handled.
//-----------------------------------------------------------------------------
bool CToolTemplate::OnRMouseDown2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint)
{
	pView->SetZoom(pView->GetZoom() * 0.5f);
	return true;
}


