#ifndef WAVEFORMMARKPROPERTIES_H
#define WAVEFORMMARKPROPERTIES_H

#include <QColor>
#include <QDomNode>

class SkinContext;
class WaveformSignalColors;

class WaveformMarkProperties {
  public:
    WaveformMarkProperties();
    WaveformMarkProperties(const QDomNode& node,
                           const SkinContext& context,
                           const WaveformSignalColors& signalColors);
    virtual ~WaveformMarkProperties();

    QColor m_color;
    QColor m_textColor;
    QString m_text;
    Qt::Alignment m_align;
    QString m_pixmapPath;

    int m_iHotCue;
};

#endif // WAVEFORMMARKPROPERTIES_H
