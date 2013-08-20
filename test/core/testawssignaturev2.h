#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsSignatureV2 : public QObject {
    Q_OBJECT

private slots:
    void sign_data();
    void sign();

    void canonicalPath_data();
    void canonicalPath();

    void canonicalRequest_data();
    void canonicalRequest();

    //void canonicalQuery_data();
    //void canonicalQuery();

};
