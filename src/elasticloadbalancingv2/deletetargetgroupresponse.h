/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETETARGETGROUPRESPONSE_H
#define QTAWS_DELETETARGETGROUPRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "deletetargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteTargetGroupResponsePrivate;

class QTAWS_EXPORT DeleteTargetGroupResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DeleteTargetGroupResponse(const DeleteTargetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTargetGroupRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DeleteTargetGroupResponse)
    Q_DISABLE_COPY(DeleteTargetGroupResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
