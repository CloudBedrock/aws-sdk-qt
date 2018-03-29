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

#include "registeronpremisesinstanceresponse.h"
#include "registeronpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  RegisterOnPremisesInstanceResponse
 *
 * @brief  Handles CodeDeploy RegisterOnPremisesInstance responses.
 *
 * @see    CodeDeployClient::registerOnPremisesInstance
 */

/**
 * @brief  Constructs a new RegisterOnPremisesInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterOnPremisesInstanceResponse::RegisterOnPremisesInstanceResponse(
        const RegisterOnPremisesInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RegisterOnPremisesInstanceResponse(new RegisterOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterOnPremisesInstanceRequest(request));
    setReply(reply);
}

const RegisterOnPremisesInstanceRequest * RegisterOnPremisesInstanceResponse::request() const
{
    Q_D(const RegisterOnPremisesInstanceResponse);
    return static_cast<const RegisterOnPremisesInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy RegisterOnPremisesInstance response.
 *
 * @param  response  Response to parse.
 */
void RegisterOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterOnPremisesInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterOnPremisesInstanceResponsePrivate
 *
 * @brief  Private implementation for RegisterOnPremisesInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterOnPremisesInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterOnPremisesInstanceResponse instance.
 */
RegisterOnPremisesInstanceResponsePrivate::RegisterOnPremisesInstanceResponsePrivate(
    RegisterOnPremisesInstanceResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy RegisterOnPremisesInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterOnPremisesInstanceResponsePrivate::parseRegisterOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterOnPremisesInstanceResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
