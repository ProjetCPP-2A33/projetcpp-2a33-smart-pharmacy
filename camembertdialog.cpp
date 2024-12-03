#include "camembertdialog.h"
#include <QPainter>

CamembertDialog::CamembertDialog(int hommes, int femmes, QWidget *parent):QDialog(parent), hommes(hommes), femmes(femmes)
{
    setWindowTitle("Statistiques des clients");
    resize(900, 450);
}


void CamembertDialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    int total = hommes + femmes;
    if (total == 0) return;  // éviter de dessiner si aucune donnée

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // taille actuelle du widget
    int widgetWidth = this->width();
    int widgetHeight = this->height();

    // Diamètre du cercle (70% du plus petit côté pour l'adapter au widget)
    int diameter = qMin(widgetWidth, widgetHeight) * 0.7;

    // Centrer le rectangle
    int x = (widgetWidth - diameter) / 2;
    int y = (widgetHeight - diameter) / 2;

    QRectF rectangle(x, y, diameter, diameter);

    // Angle en pourcentage pour chaque tranche
    int angleHomme = 360 * hommes / total;
    int angleFemme = 360 * femmes / total;

    // Dessiner la tranche Hommes
    painter.setBrush(Qt::darkGreen);//couleur de remplissage
    painter.drawPie(rectangle, 0, angleHomme * 16);

    // Dessiner la tranche Femmes
    painter.setBrush(Qt::lightGray);
    painter.drawPie(rectangle, angleHomme * 16, angleFemme * 16);// les angles en QT sont exprimes en 16eme de degres

    // Légendes
    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::darkGreen);
    painter.drawText(x + diameter + 20, y + diameter / 2 - 20, QString("Hommes: %1").arg(hommes));

    painter.setPen(Qt::lightGray);
    painter.drawText(x + diameter + 20, y + diameter / 2 + 20, QString("Femmes: %1").arg(femmes));
}
