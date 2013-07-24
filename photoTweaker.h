#ifndef PHOTOTWEAKER_H
#define PHOTOTWEAKER_H

#include "ui_photoTweaker.h"
#include "photo.h"

class QLabel;
class QStatusBar;

class Photo;
// #include <Magick++.h>

// using namespace Magick;

class PhotoTweaker : public QMainWindow, public Ui::PhotoTweaker
{
	Q_OBJECT
public:
	PhotoTweaker();
    void setFilePath(QString filePath) {this->filePath = filePath;}
	void run();

    static const int EFFECT_COUNT;
    static const int EFFECT_NONE;
    static const int EFFECT_ROTATION;
    static const int EFFECT_GRAYSCALE;

public slots:
	void open();
	void save();
	void show();
	void setStatusSize(int width, int height);
	void setStatusMouse(int x, int y);
	void setStatusMouse();
	void setStatusMessage(QString message);
	void setTitle(QString title);
    void doEffect(bool state);

private:

    void initializeStatusBar();
    QStatusBar* statusBar;
    QLabel* statusBarSize;
    QLabel* statusBarMouse;
    QLabel* statusBarMessage;
    void initializeToolBar();
	QString filePath;
    Photo* photo;

    QVector<QAction*> effectActions;
	// Magick++ Objects
	QByteArray 	imgData;
	QPixmap	pixmap;
	// Image 		magickImage;
	// Blob 			blob;
};

#endif // PHOTOTWEAKER_H
