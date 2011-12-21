#ifndef IPN_HelloApp_H
#define IPN_HelloApp_H

#include "App.h"

namespace ipn
{
	class BackgroundWidget;
	class TextWidget;
	class ScalableButtonWidget;

	class HelloApp : public App
	{
		Q_OBJECT

		public:
			HelloApp(QWidget *parent = 0);

			inline bool isOpaque() {return false;}

			void setMessage(QString message);

		signals:
			void okButtonClicked();

		private:
			BackgroundWidget *m_back;

			TextWidget *m_note;
			ScalableButtonWidget *m_okButton;
	};

} // namespace ipn

#endif /* end of include guard: IPN_HelloApp_H */
