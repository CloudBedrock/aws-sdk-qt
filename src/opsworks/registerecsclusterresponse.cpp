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

#include "registerecsclusterresponse.h"
#include "registerecsclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  RegisterEcsClusterResponse
 *
 * @brief  Handles OpsWorks RegisterEcsCluster responses.
 *
 * @see    OpsWorksClient::registerEcsCluster
 */

/**
 * @brief  Constructs a new RegisterEcsClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterEcsClusterResponse::RegisterEcsClusterResponse(
        const RegisterEcsClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RegisterEcsClusterResponse(new RegisterEcsClusterResponsePrivate(this), parent)
{
    setRequest(new RegisterEcsClusterRequest(request));
    setReply(reply);
}

const RegisterEcsClusterRequest * RegisterEcsClusterResponse::request() const
{
    Q_D(const RegisterEcsClusterResponse);
    return static_cast<const RegisterEcsClusterRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterEcsCluster response.
 *
 * @param  response  Response to parse.
 */
void RegisterEcsClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterEcsClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterEcsClusterResponsePrivate
 *
 * @brief  Private implementation for RegisterEcsClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEcsClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterEcsClusterResponse instance.
 */
RegisterEcsClusterResponsePrivate::RegisterEcsClusterResponsePrivate(
    RegisterEcsClusterResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterEcsClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterEcsClusterResponsePrivate::parseRegisterEcsClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterEcsClusterResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
