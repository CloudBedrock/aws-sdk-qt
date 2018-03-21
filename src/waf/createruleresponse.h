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

#ifndef QTAWS_CREATERULERESPONSE_H
#define QTAWS_CREATERULERESPONSE_H

#include "wafresponse.h"
#include "createrulerequest.h"

namespace AWS {

namespace waf {

class CreateRuleResponsePrivate;

class QTAWS_EXPORT CreateRuleResponse : public CreateRuleResponse {
    Q_OBJECT

public:
    CreateRuleResponse(const CreateRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRuleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateRuleResponse)
    Q_DISABLE_COPY(CreateRuleResponse)

};

} // namespace waf
} // namespace AWS

#endif
