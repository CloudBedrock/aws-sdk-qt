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

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_H

#include "configserviceresponse.h"
#include "getcompliancedetailsbyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceResponsePrivate;

class QTAWS_EXPORT GetComplianceDetailsByResourceResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetComplianceDetailsByResourceResponse(const GetComplianceDetailsByResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceDetailsByResourceRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailsByResourceResponse)
    Q_DISABLE_COPY(GetComplianceDetailsByResourceResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
