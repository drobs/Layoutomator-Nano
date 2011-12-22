#include "LayoutApp.h"
#include "widgets/BackgroundWidget.h"
#include "widgets/ImageWidget.h"
#include "widgets/TextWidget.h"
#include "widgets/ScalableButtonWidget.h"

namespace ipn
{
LayoutApp::LayoutApp(QWidget *parent) : App(parent)
{
    m_back = new BackgroundWidget(this);
    m_back->setColor(BackgroundWidget::BG_GRAY);
    m_back->move(0, 0);

    m_quitButton = new ScalableButtonWidget(this);
    m_quitButton->move(160, 180);
    m_quitButton->resize(64, 48);
    m_quitButton->setImage(":/img/buttons/default");
    m_quitButton->setText("quit");
    connect(m_quitButton, SIGNAL(clicked()), this, SIGNAL(quitButtonClicked()));
}

} // namespace ipn
