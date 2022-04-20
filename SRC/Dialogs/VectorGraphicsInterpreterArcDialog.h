#ifndef __VectorGraphicsInterpreterArcDialog__
#define __VectorGraphicsInterpreterArcDialog__

/**
@file
Subclass of ArcDialog, which is generated by wxFormBuilder.
*/

//// end generated include

#include "../GUI/GUI.h"
#include "../Shapes/Arc.h"
#include "DialogValidator.h"

/** Implementing ArcDialog */
class VectorGraphicsInterpreterArcDialog : public ArcDialog
{
	protected:
		// Handlers for ArcDialog events.
		void m_centerOnTextEnter( wxCommandEvent& event );
		void m_horizontalShaftOnTextEnter( wxCommandEvent& event );
		void m_verticalShaftOnTextEnter( wxCommandEvent& event );
		void m_startAngleOnTextEnter( wxCommandEvent& event );
		void m_stopAngleOnTextEnter( wxCommandEvent& event );
		void m_colourOnTextEnter( wxCommandEvent& event );
		void m_transformVectorOnTextEnter( wxCommandEvent& event );
		void m_rotationAngleOnTextEnter( wxCommandEvent& event );
		void m_deleteButtonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		VectorGraphicsInterpreterArcDialog( wxWindow* parent );
	//// end generated class members

	private:
		/** pointer to arc */
		ShapeArc* m_arc;
		/** dialog validator */
		DialogValidator m_validator;

	public:
		/** Constructor connected with specific ellipse shape */
		VectorGraphicsInterpreterArcDialog(wxWindow* parent, ShapeArc* arc);

};

#endif // __VectorGraphicsInterpreterArcDialog__