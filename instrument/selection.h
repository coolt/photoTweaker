#ifndef SELECTIONINSTRUMENT_H
#define SELECTIONINSTRUMENT_H

#include "abstractinstrument.h"

QT_BEGIN_NAMESPACE
class QUndoStack;
class Photo;
QT_END_NAMESPACE

class QRubberBand;

class SelectionInstrument : public AbstractInstrument
{
    Q_OBJECT

public:
    explicit SelectionInstrument(QObject *parent = 0);
    void clearSelection();
    QRect getSelection() {return selection;} // return the selection in image coordinates
    bool isSelection() {return !selection.isEmpty();}

protected:
    void paint(Photo &photo, bool = false, bool = false);
    QPoint origin;
    QRubberBand* rubberBand;
    QRect selection; // selection in image coordinates
    bool selectionCreating;
    enum SelectionDirection
    {
        NONE = 0,
        N = 1,
        S = 2,
        E = 4,
        W = 8,
        NE = N | E,
        SE = S | E,
        NW = N | W,
        SW = S | W
    };
    /*
    inline SelectionDirection operator|(SelectionDirection a, SelectionDirection b)
        {return static_cast<SelectionDirection>(static_cast<int>(a) | static_cast<int>(b));}
    */
    enum SelectionDirection selectionResizing;
    bool selectionMoving;
private:
    void mousePressEvent(QMouseEvent *event, Photo &photo);
    void mouseMoveEvent(QMouseEvent *event, Photo &photo);
    void mouseReleaseEvent(QMouseEvent *event, Photo &photo);
    void resizeEvent(QResizeEvent *event, Photo &photo);
    void paintEvent(QPaintEvent *event, Photo &photo);
    void updateCursor(QMouseEvent *event, Photo &photo);

};


#endif // SELECTIONINSTRUMENT_H
