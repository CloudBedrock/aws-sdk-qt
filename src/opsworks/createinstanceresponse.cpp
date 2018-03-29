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

#include "createinstanceresponse.h"
#include "createinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  CreateInstanceResponse
 *
 * @brief  Handles OpsWorks CreateInstance responses.
 *
 * @see    OpsWorksClient::createInstance
 */

/**
 * @brief  Constructs a new CreateInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceResponse::CreateInstanceResponse(
        const CreateInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateInstanceResponse(new CreateInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceRequest(request));
    setReply(reply);
}

const CreateInstanceRequest * CreateInstanceResponse::request() const
{
    Q_D(const CreateInstanceResponse);
    return static_cast<const CreateInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks CreateInstance response.
 *
 * @param  response  Response to parse.
 */
void CreateInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstanceResponsePrivate
 *
 * @brief  Private implementation for CreateInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstanceResponse instance.
 */
CreateInstanceResponsePrivate::CreateInstanceResponsePrivate(
    CreateInstanceResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks CreateInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstanceResponsePrivate::parseCreateInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
