/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_H
#define QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describedomaincontrollersrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDomainControllersResponsePrivate;

class QTAWS_EXPORT DescribeDomainControllersResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeDomainControllersResponse(const DescribeDomainControllersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainControllersRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeDomainControllersResponse)
    Q_DISABLE_COPY(DescribeDomainControllersResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
