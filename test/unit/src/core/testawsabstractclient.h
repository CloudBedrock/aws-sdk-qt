/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QTest>

class TestAwsAbstractClient : public QObject {
    Q_OBJECT

private slots:
    void construct();
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void credentials_data();
    void credentials();

    void endpoint_data();
    void endpoint();

    void networkAccessManager_data();
    void networkAccessManager();

    void region_data();
    void region();

    void send_data();
    void send();

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void serviceName_data();
    void serviceName();
    #endif

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void signature_data();
    void signature();
    #endif

    // AwsAbstractClientPrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void constructPrivate();
    #endif
};
