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

#include "associateelasticipresponse.h"
#include "associateelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  AssociateElasticIpResponse
 *
 * @brief  Handles OpsWorks AssociateElasticIp responses.
 *
 * @see    OpsWorksClient::associateElasticIp
 */

/**
 * @brief  Constructs a new AssociateElasticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateElasticIpResponse::AssociateElasticIpResponse(
        const AssociateElasticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AssociateElasticIpResponse(new AssociateElasticIpResponsePrivate(this), parent)
{
    setRequest(new AssociateElasticIpRequest(request));
    setReply(reply);
}

const AssociateElasticIpRequest * AssociateElasticIpResponse::request() const
{
    Q_D(const AssociateElasticIpResponse);
    return static_cast<const AssociateElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks AssociateElasticIp response.
 *
 * @param  response  Response to parse.
 */
void AssociateElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateElasticIpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateElasticIpResponsePrivate
 *
 * @brief  Private implementation for AssociateElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateElasticIpResponse instance.
 */
AssociateElasticIpResponsePrivate::AssociateElasticIpResponsePrivate(
    AssociateElasticIpResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks AssociateElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateElasticIpResponsePrivate::parseAssociateElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateElasticIpResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
