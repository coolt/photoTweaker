#include <QDebug>
#include "disabled.h"

#include "effect/disabledPreferences.h"

EffectDisabled::EffectDisabled(QObject *parent) :
AbstractEffect(parent)
{
}

QWidget* EffectDisabled::getPreferencesWidget()
{
    DisabledPreferences* disabledPreferences = new DisabledPreferences();
    disabledPreferences->setMinimumSize(disabledPreferences->size());
    // qDebug() << "getPreferencesWidget enabled" << enabled;
    disabledPreferences->setEnabled(this->enabled);
    disabledPreferences->setEffectName(effectName);
    connect(disabledPreferences, SIGNAL(accepted(bool)), this, SLOT(acceptPreferencesWidget(bool)));
    return disabledPreferences;
}

void EffectDisabled::acceptPreferencesWidget(bool enabled)
{
    this->enabled = enabled;
}
