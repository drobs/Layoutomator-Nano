#ifndef IPN_LAYOUTAPP_H
#define IPN_LAYOUTAPP_H

#include "App.h"

namespace ipn
{
    class BackgroundWidget;
    class TextWidget;
    class ScalableButtonWidget;

    class LayoutApp : public App
        {
             Q_OBJECT

             public:
                LayoutApp(QWidget *parent = 0);

                inline bool isOpaque() {return false;}

            signals:
                void okButtonClicked();

             private:
                BackgroundWidget *m_back;
                ScalableButtonWidget *m_quitButton;
};
} // namespace ipn

#endif /* end of include guard: IPN_LayoutApp_H */
