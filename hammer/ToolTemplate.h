//========= Copyright © 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef TOOLTEMPLATE_H
#define TOOLTEMPLATE_H
#ifdef _WIN32
#pragma once
#endif

#include "ToolInterface.h"
#include "TemplateDlg.h"


class CToolTemplate : public CBaseTool
{
public:

	CToolTemplate(void);
	~CToolTemplate(void) {}

	//
	// CBaseTool implementation.
	//
	virtual ToolID_t GetToolID(void) { return TOOL_TEMPLATE; }

	virtual void OnActivate();
	virtual void OnDeactivate();

	virtual bool OnContextMenu2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint);
	virtual bool OnLMouseDown2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint);
	virtual bool OnRMouseDown2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint);
	virtual bool OnMouseMove2D(CMapView2D *pView, UINT nFlags, const Vector2D &vPoint);

private:
	CTemplateDlg m_cTemplateDlg;
};

#endif // TOOLMAGNIFY_H
