/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_STARTUSERIMPORTJOBRESPONSE_H
#define QTAWS_STARTUSERIMPORTJOBRESPONSE_H

#include "cognito-idpresponse.h"
#include "startuserimportjobrequest.h"

namespace AWS {

namespace cognito-idp {

class StartUserImportJobResponsePrivate;

class QTAWS_EXPORT StartUserImportJobResponse : public StartUserImportJobResponse {
    Q_OBJECT

public:
    StartUserImportJobResponse(const StartUserImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartUserImportJobRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(StartUserImportJobResponse)
    Q_DISABLE_COPY(StartUserImportJobResponse)

};

} // namespace cognito-idp
} // namespace AWS

#endif
