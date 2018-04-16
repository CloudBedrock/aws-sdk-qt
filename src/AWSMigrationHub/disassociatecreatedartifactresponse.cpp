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

#include "disassociatecreatedartifactresponse.h"
#include "disassociatecreatedartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactResponse
 *
 * \brief The DisassociateCreatedArtifactResponse class provides an interace for MigrationHub DisassociateCreatedArtifact responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::disassociateCreatedArtifact
 */

/*!
 * @brief  Constructs a new DisassociateCreatedArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateCreatedArtifactResponse::DisassociateCreatedArtifactResponse(
        const DisassociateCreatedArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DisassociateCreatedArtifactResponsePrivate(this), parent)
{
    setRequest(new DisassociateCreatedArtifactRequest(request));
    setReply(reply);
}

const DisassociateCreatedArtifactRequest * DisassociateCreatedArtifactResponse::request() const
{
    Q_D(const DisassociateCreatedArtifactResponse);
    return static_cast<const DisassociateCreatedArtifactRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub DisassociateCreatedArtifact response.
 *
 * @param  response  Response to parse.
 */
void DisassociateCreatedArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateCreatedArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateCreatedArtifactResponsePrivate
 *
 * \brief Private implementation for DisassociateCreatedArtifactResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateCreatedArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateCreatedArtifactResponse instance.
 */
DisassociateCreatedArtifactResponsePrivate::DisassociateCreatedArtifactResponsePrivate(
    DisassociateCreatedArtifactResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub DisassociateCreatedArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateCreatedArtifactResponsePrivate::parseDisassociateCreatedArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateCreatedArtifactResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
